// $Id$

#include "ace/Log_Msg.h"
#include "ace/SV_Shared_Memory.h"
#include "ace/SV_Semaphore_Simple.h"
#include "ace/Signal.h"
#include "Semaphore_Test.h"

static ACE_SV_Shared_Memory shm_server (SHM_KEY, SHMSZ, ACE_SV_Shared_Memory::ACE_CREATE);
static ACE_SV_Semaphore_Simple sem (SEM_KEY_1, ACE_SV_Semaphore_Simple::ACE_CREATE, 0, 2);

extern "C" void 
cleanup (int)
{
  if (shm_server.remove () < 0 || sem.remove () < 0)
    ACE_ERROR ((LM_ERROR, "%p\n%a", "remove", 1));
  ACE_OS::exit (0);
}

int
main (void)
{
  // Register a signal handler.
  ACE_Sig_Action sa ((ACE_SignalHandler) cleanup, SIGINT);

  char *s = (char *) shm_server.get_segment_ptr ();

  for (char c = 'a'; c <= 'z'; c++)
    *s++ = c;

  *s = '\0';

  if (sem.release (0) < 0)
    ESD ("server sem.release", done);

  if (sem.acquire (1) < 0)
    ESD ("server sem.acquire", done);

done:
  cleanup ();
  return 0;
}
