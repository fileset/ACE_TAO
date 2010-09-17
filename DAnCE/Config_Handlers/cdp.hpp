/* $Id$
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 *
 * If you find errors or feel that there are bugfixes to be made,
 * please contact the current XSC maintainer:
 *             Will Otte <wotte@dre.vanderbilt.edu>
 */

// Fix for Borland compilers, which seem to have a broken
// <string> include.
#ifdef __BORLANDC__
# include <string.h>
#endif

#ifndef CDP_HPP
#define CDP_HPP

#include "XSC_XML_Handlers_Export.h"
// Forward declarations.
//
namespace DAnCE
{
  namespace Config_Handlers
  {
    class PlanSubcomponentPropertyReference;
    class PlanPropertyMapping;
    class deploymentPlan;
  }
}

#include <memory>
#include <string>
#include <list>
#include "XMLSchema/Types.hpp"
#include "XMLSchema/id_map.hpp"
#include "ace/Refcounted_Auto_Ptr.h"
#include "ace/Null_Mutex.h"
#include "ace/TSS_T.h"
#include "ace/ace_wchar.h"
#include "ace/Singleton.h"

#include "ccd.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    class XSC_XML_Handlers_Export PlanSubcomponentPropertyReference : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < PlanSubcomponentPropertyReference, ACE_Null_Mutex > _ptr;

      // propertyName
      //
      public:
      ::XMLSchema::string< ACE_TCHAR > const& propertyName () const;
      void propertyName (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > propertyName_;

      // instance
      //
      public:
      ::DAnCE::Config_Handlers::InstanceDeploymentDescription const& instance () const;
      void instance (::DAnCE::Config_Handlers::InstanceDeploymentDescription const& );

      protected:
      ::std::auto_ptr< ::DAnCE::Config_Handlers::InstanceDeploymentDescription > instance_;

      public:
      PlanSubcomponentPropertyReference (::XMLSchema::string< ACE_TCHAR > const& propertyName__,
                                         ::DAnCE::Config_Handlers::InstanceDeploymentDescription const& instance__);

      PlanSubcomponentPropertyReference (::XSCRT::XML::Element< ACE_TCHAR > const&);
      PlanSubcomponentPropertyReference (PlanSubcomponentPropertyReference const& s);

      PlanSubcomponentPropertyReference&
      operator= (PlanSubcomponentPropertyReference const& s);

      private:
      char regulator__;
    };


    class XSC_XML_Handlers_Export PlanPropertyMapping : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < PlanPropertyMapping, ACE_Null_Mutex > _ptr;

      // name
      //
      public:
      ::XMLSchema::string< ACE_TCHAR > const& name () const;
      void name (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > name_;

      // source
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::XMLSchema::string< ACE_TCHAR >, ACE_Null_Mutex > >::iterator source_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::XMLSchema::string< ACE_TCHAR >, ACE_Null_Mutex > >::const_iterator source_const_iterator;
      source_iterator begin_source ();
      source_iterator end_source ();
      source_const_iterator begin_source () const;
      source_const_iterator end_source () const;
      void add_source ( ACE_Refcounted_Auto_Ptr < ::XMLSchema::string< ACE_TCHAR >, ACE_Null_Mutex > const& );
      XSCRT::Type* source_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_source (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::XMLSchema::string< ACE_TCHAR >, ACE_Null_Mutex > > source_;

      // externalName
      //
      public:
      ::XMLSchema::string< ACE_TCHAR > const& externalName () const;
      void externalName (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > externalName_;

      // delegatesTo
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference, ACE_Null_Mutex > >::iterator delegatesTo_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference, ACE_Null_Mutex > >::const_iterator delegatesTo_const_iterator;
      delegatesTo_iterator begin_delegatesTo ();
      delegatesTo_iterator end_delegatesTo ();
      delegatesTo_const_iterator begin_delegatesTo () const;
      delegatesTo_const_iterator end_delegatesTo () const;
      void add_delegatesTo ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference, ACE_Null_Mutex > const& );
      XSCRT::Type* delegatesTo_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_delegatesTo (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference, ACE_Null_Mutex > > delegatesTo_;

      public:
      PlanPropertyMapping (::XMLSchema::string< ACE_TCHAR > const& name__,
                           ::XMLSchema::string< ACE_TCHAR > const& externalName__,
                           ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference, ACE_Null_Mutex > > const& delegatesTo__);

      PlanPropertyMapping (::XSCRT::XML::Element< ACE_TCHAR > const&);
      PlanPropertyMapping (PlanPropertyMapping const& s);

      PlanPropertyMapping&
      operator= (PlanPropertyMapping const& s);

      private:
      char regulator__;
    };


    class XSC_XML_Handlers_Export deploymentPlan : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < deploymentPlan, ACE_Null_Mutex > _ptr;

      // label
      //
      public:
      bool label_p () const;
      ::XMLSchema::string< ACE_TCHAR > const& label () const;
      void label (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > label_;

      // UUID
      //
      public:
      bool UUID_p () const;
      ::XMLSchema::string< ACE_TCHAR > const& UUID () const;
      void UUID (::XMLSchema::string< ACE_TCHAR > const& );

      protected:
      ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > UUID_;

      // realizes
      //
      public:
      bool realizes_p () const;
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& realizes () const;
      void realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      ::std::auto_ptr< ::DAnCE::Config_Handlers::ComponentInterfaceDescription > realizes_;

      // implementation
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::MonolithicDeploymentDescription, ACE_Null_Mutex > >::iterator implementation_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::MonolithicDeploymentDescription, ACE_Null_Mutex > >::const_iterator implementation_const_iterator;
      implementation_iterator begin_implementation ();
      implementation_iterator end_implementation ();
      implementation_const_iterator begin_implementation () const;
      implementation_const_iterator end_implementation () const;
      void add_implementation ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::MonolithicDeploymentDescription, ACE_Null_Mutex > const& );
      XSCRT::Type* implementation_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_implementation (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::MonolithicDeploymentDescription, ACE_Null_Mutex > > implementation_;

      // instance
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::InstanceDeploymentDescription, ACE_Null_Mutex > >::iterator instance_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::InstanceDeploymentDescription, ACE_Null_Mutex > >::const_iterator instance_const_iterator;
      instance_iterator begin_instance ();
      instance_iterator end_instance ();
      instance_const_iterator begin_instance () const;
      instance_const_iterator end_instance () const;
      void add_instance ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::InstanceDeploymentDescription, ACE_Null_Mutex > const& );
      XSCRT::Type* instance_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_instance (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::InstanceDeploymentDescription, ACE_Null_Mutex > > instance_;

      // connection
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanConnectionDescription, ACE_Null_Mutex > >::iterator connection_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanConnectionDescription, ACE_Null_Mutex > >::const_iterator connection_const_iterator;
      connection_iterator begin_connection ();
      connection_iterator end_connection ();
      connection_const_iterator begin_connection () const;
      connection_const_iterator end_connection () const;
      void add_connection ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanConnectionDescription, ACE_Null_Mutex > const& );
      XSCRT::Type* connection_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_connection (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanConnectionDescription, ACE_Null_Mutex > > connection_;

      // externalProperty
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanPropertyMapping, ACE_Null_Mutex > >::iterator externalProperty_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanPropertyMapping, ACE_Null_Mutex > >::const_iterator externalProperty_const_iterator;
      externalProperty_iterator begin_externalProperty ();
      externalProperty_iterator end_externalProperty ();
      externalProperty_const_iterator begin_externalProperty () const;
      externalProperty_const_iterator end_externalProperty () const;
      void add_externalProperty ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanPropertyMapping, ACE_Null_Mutex > const& );
      XSCRT::Type* externalProperty_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_externalProperty (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanPropertyMapping, ACE_Null_Mutex > > externalProperty_;

      // dependsOn
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ImplementationDependency, ACE_Null_Mutex > >::iterator dependsOn_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ImplementationDependency, ACE_Null_Mutex > >::const_iterator dependsOn_const_iterator;
      dependsOn_iterator begin_dependsOn ();
      dependsOn_iterator end_dependsOn ();
      dependsOn_const_iterator begin_dependsOn () const;
      dependsOn_const_iterator end_dependsOn () const;
      void add_dependsOn ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ImplementationDependency, ACE_Null_Mutex > const& );
      XSCRT::Type* dependsOn_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_dependsOn (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ImplementationDependency, ACE_Null_Mutex > > dependsOn_;

      // artifact
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ArtifactDeploymentDescription, ACE_Null_Mutex > >::iterator artifact_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ArtifactDeploymentDescription, ACE_Null_Mutex > >::const_iterator artifact_const_iterator;
      artifact_iterator begin_artifact ();
      artifact_iterator end_artifact ();
      artifact_const_iterator begin_artifact () const;
      artifact_const_iterator end_artifact () const;
      void add_artifact ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ArtifactDeploymentDescription, ACE_Null_Mutex > const& );
      XSCRT::Type* artifact_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_artifact (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ArtifactDeploymentDescription, ACE_Null_Mutex > > artifact_;

      // infoProperty
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex > >::iterator infoProperty_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex > >::const_iterator infoProperty_const_iterator;
      infoProperty_iterator begin_infoProperty ();
      infoProperty_iterator end_infoProperty ();
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      void add_infoProperty ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex > const& );
      XSCRT::Type* infoProperty_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_infoProperty (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex > > infoProperty_;

      // localityConstraint
      //
      public:
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanLocality, ACE_Null_Mutex > >::iterator localityConstraint_iterator;
      typedef ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanLocality, ACE_Null_Mutex > >::const_iterator localityConstraint_const_iterator;
      localityConstraint_iterator begin_localityConstraint ();
      localityConstraint_iterator end_localityConstraint ();
      localityConstraint_const_iterator begin_localityConstraint () const;
      localityConstraint_const_iterator end_localityConstraint () const;
      void add_localityConstraint ( ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanLocality, ACE_Null_Mutex > const& );
      XSCRT::Type* localityConstraint_ptr ( std::basic_string<ACE_TCHAR> idref );
      size_t count_localityConstraint (void) const;

      protected:
      ::std::list< ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PlanLocality, ACE_Null_Mutex > > localityConstraint_;

      public:
      deploymentPlan ();

      deploymentPlan (::XSCRT::XML::Element< ACE_TCHAR > const&);
      deploymentPlan (deploymentPlan const& s);

      deploymentPlan&
      operator= (deploymentPlan const& s);

      private:
      char regulator__;
    };
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

#include "XMLSchema/Traversal.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace Traversal
    {
      struct XSC_XML_Handlers_Export PlanSubcomponentPropertyReference : ::XMLSchema::Traversal::Traverser< ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference >
      {
        virtual void
        traverse (Type&);

        virtual void
        traverse (Type const&);

        virtual void
        pre (Type&);

        virtual void
        pre (Type const&);

        virtual void
        propertyName (Type&);

        virtual void
        propertyName (Type const&);

        virtual void
        instance (Type&);

        virtual void
        instance (Type const&);

        virtual void
        post (Type&);

        virtual void
        post (Type const&);
      };

      struct XSC_XML_Handlers_Export PlanPropertyMapping : ::XMLSchema::Traversal::Traverser< ::DAnCE::Config_Handlers::PlanPropertyMapping >
      {
        virtual void
        traverse (Type&);

        virtual void
        traverse (Type const&);

        virtual void
        pre (Type&);

        virtual void
        pre (Type const&);

        virtual void
        name (Type&);

        virtual void
        name (Type const&);

        virtual void
        source (Type&);

        virtual void
        source (Type const&);

        virtual void
        source_pre (Type&);

        virtual void
        source_pre (Type const&);

        virtual void
        source_next (Type&);

        virtual void
        source_next (Type const&);

        virtual void
        source_post (Type&);

        virtual void
        source_post (Type const&);

        virtual void
        source_none (Type&);

        virtual void
        source_none (Type const&);

        virtual void
        externalName (Type&);

        virtual void
        externalName (Type const&);

        virtual void
        delegatesTo (Type&);

        virtual void
        delegatesTo (Type const&);

        virtual void
        delegatesTo_pre (Type&);

        virtual void
        delegatesTo_pre (Type const&);

        virtual void
        delegatesTo_next (Type&);

        virtual void
        delegatesTo_next (Type const&);

        virtual void
        delegatesTo_post (Type&);

        virtual void
        delegatesTo_post (Type const&);

        virtual void
        post (Type&);

        virtual void
        post (Type const&);
      };

      struct XSC_XML_Handlers_Export deploymentPlan : ::XMLSchema::Traversal::Traverser< ::DAnCE::Config_Handlers::deploymentPlan >
      {
        virtual void
        traverse (Type&);

        virtual void
        traverse (Type const&);

        virtual void
        pre (Type&);

        virtual void
        pre (Type const&);

        virtual void
        label (Type&);

        virtual void
        label (Type const&);

        virtual void
        label_none (Type&);

        virtual void
        label_none (Type const&);

        virtual void
        UUID (Type&);

        virtual void
        UUID (Type const&);

        virtual void
        UUID_none (Type&);

        virtual void
        UUID_none (Type const&);

        virtual void
        realizes (Type&);

        virtual void
        realizes (Type const&);

        virtual void
        realizes_none (Type&);

        virtual void
        realizes_none (Type const&);

        virtual void
        implementation (Type&);

        virtual void
        implementation (Type const&);

        virtual void
        implementation_pre (Type&);

        virtual void
        implementation_pre (Type const&);

        virtual void
        implementation_next (Type&);

        virtual void
        implementation_next (Type const&);

        virtual void
        implementation_post (Type&);

        virtual void
        implementation_post (Type const&);

        virtual void
        implementation_none (Type&);

        virtual void
        implementation_none (Type const&);

        virtual void
        instance (Type&);

        virtual void
        instance (Type const&);

        virtual void
        instance_pre (Type&);

        virtual void
        instance_pre (Type const&);

        virtual void
        instance_next (Type&);

        virtual void
        instance_next (Type const&);

        virtual void
        instance_post (Type&);

        virtual void
        instance_post (Type const&);

        virtual void
        instance_none (Type&);

        virtual void
        instance_none (Type const&);

        virtual void
        connection (Type&);

        virtual void
        connection (Type const&);

        virtual void
        connection_pre (Type&);

        virtual void
        connection_pre (Type const&);

        virtual void
        connection_next (Type&);

        virtual void
        connection_next (Type const&);

        virtual void
        connection_post (Type&);

        virtual void
        connection_post (Type const&);

        virtual void
        connection_none (Type&);

        virtual void
        connection_none (Type const&);

        virtual void
        externalProperty (Type&);

        virtual void
        externalProperty (Type const&);

        virtual void
        externalProperty_pre (Type&);

        virtual void
        externalProperty_pre (Type const&);

        virtual void
        externalProperty_next (Type&);

        virtual void
        externalProperty_next (Type const&);

        virtual void
        externalProperty_post (Type&);

        virtual void
        externalProperty_post (Type const&);

        virtual void
        externalProperty_none (Type&);

        virtual void
        externalProperty_none (Type const&);

        virtual void
        dependsOn (Type&);

        virtual void
        dependsOn (Type const&);

        virtual void
        dependsOn_pre (Type&);

        virtual void
        dependsOn_pre (Type const&);

        virtual void
        dependsOn_next (Type&);

        virtual void
        dependsOn_next (Type const&);

        virtual void
        dependsOn_post (Type&);

        virtual void
        dependsOn_post (Type const&);

        virtual void
        dependsOn_none (Type&);

        virtual void
        dependsOn_none (Type const&);

        virtual void
        artifact (Type&);

        virtual void
        artifact (Type const&);

        virtual void
        artifact_pre (Type&);

        virtual void
        artifact_pre (Type const&);

        virtual void
        artifact_next (Type&);

        virtual void
        artifact_next (Type const&);

        virtual void
        artifact_post (Type&);

        virtual void
        artifact_post (Type const&);

        virtual void
        artifact_none (Type&);

        virtual void
        artifact_none (Type const&);

        virtual void
        infoProperty (Type&);

        virtual void
        infoProperty (Type const&);

        virtual void
        infoProperty_pre (Type&);

        virtual void
        infoProperty_pre (Type const&);

        virtual void
        infoProperty_next (Type&);

        virtual void
        infoProperty_next (Type const&);

        virtual void
        infoProperty_post (Type&);

        virtual void
        infoProperty_post (Type const&);

        virtual void
        infoProperty_none (Type&);

        virtual void
        infoProperty_none (Type const&);

        virtual void
        localityConstraint (Type&);

        virtual void
        localityConstraint (Type const&);

        virtual void
        localityConstraint_pre (Type&);

        virtual void
        localityConstraint_pre (Type const&);

        virtual void
        localityConstraint_next (Type&);

        virtual void
        localityConstraint_next (Type const&);

        virtual void
        localityConstraint_post (Type&);

        virtual void
        localityConstraint_post (Type const&);

        virtual void
        localityConstraint_none (Type&);

        virtual void
        localityConstraint_none (Type const&);

        virtual void
        post (Type&);

        virtual void
        post (Type const&);
      };
    }
  }
}

#include "XMLSchema/Writer.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace Writer
    {
      struct PlanSubcomponentPropertyReference : Traversal::PlanSubcomponentPropertyReference,
      virtual ::XSCRT::Writer< ACE_TCHAR >
      {
        typedef ::DAnCE::Config_Handlers::PlanSubcomponentPropertyReference Type;
        PlanSubcomponentPropertyReference (::XSCRT::XML::Element< ACE_TCHAR >&);

        virtual void
        traverse (Type &o)
        {
          this->traverse (const_cast <Type const &> (o));
        }

        virtual void
        traverse (Type const&);

        virtual void
        propertyName (Type &o)
        {
          this->propertyName (const_cast <Type const &> (o));
        }

        virtual void
        propertyName (Type const&);

        virtual void
        instance (Type &o)
        {
          this->instance (const_cast <Type const &> (o));
        }

        virtual void
        instance (Type const&);

        protected:
        PlanSubcomponentPropertyReference ();
      };

      struct PlanPropertyMapping : Traversal::PlanPropertyMapping,
      virtual ::XSCRT::Writer< ACE_TCHAR >
      {
        typedef ::DAnCE::Config_Handlers::PlanPropertyMapping Type;
        PlanPropertyMapping (::XSCRT::XML::Element< ACE_TCHAR >&);

        virtual void
        traverse (Type &o)
        {
          this->traverse (const_cast <Type const &> (o));
        }

        virtual void
        traverse (Type const&);

        virtual void
        name (Type &o)
        {
          this->name (const_cast <Type const &> (o));
        }

        virtual void
        name (Type const&);

        virtual void
        source_pre (Type &o)
        {
          this->source_pre (const_cast <Type const &> (o));
        }

        virtual void
        source_pre (Type const&);

        virtual void
        source_next (Type &o)
        {
          this->source_next (const_cast <Type const &> (o));
        }

        virtual void
        source_next (Type const&);

        virtual void
        source_post (Type &o)
        {
          this->source_post (const_cast <Type const &> (o));
        }

        virtual void
        source_post (Type const&);

        virtual void
        externalName (Type &o)
        {
          this->externalName (const_cast <Type const &> (o));
        }

        virtual void
        externalName (Type const&);

        virtual void
        delegatesTo_pre (Type &o)
        {
          this->delegatesTo_pre (const_cast <Type const &> (o));
        }

        virtual void
        delegatesTo_pre (Type const&);

        virtual void
        delegatesTo_next (Type &o)
        {
          this->delegatesTo_next (const_cast <Type const &> (o));
        }

        virtual void
        delegatesTo_next (Type const&);

        virtual void
        delegatesTo_post (Type &o)
        {
          this->delegatesTo_post (const_cast <Type const &> (o));
        }

        virtual void
        delegatesTo_post (Type const&);

        protected:
        PlanPropertyMapping ();
      };

      struct deploymentPlan : Traversal::deploymentPlan,
      virtual ::XSCRT::Writer< ACE_TCHAR >
      {
        typedef ::DAnCE::Config_Handlers::deploymentPlan Type;
        deploymentPlan (::XSCRT::XML::Element< ACE_TCHAR >&);

        virtual void
        traverse (Type &o)
        {
          this->traverse (const_cast <Type const &> (o));
        }

        virtual void
        traverse (Type const&);

        virtual void
        label (Type &o)
        {
          this->label (const_cast <Type const &> (o));
        }

        virtual void
        label (Type const&);

        virtual void
        UUID (Type &o)
        {
          this->UUID (const_cast <Type const &> (o));
        }

        virtual void
        UUID (Type const&);

        virtual void
        realizes (Type &o)
        {
          this->realizes (const_cast <Type const &> (o));
        }

        virtual void
        realizes (Type const&);

        virtual void
        implementation_pre (Type &o)
        {
          this->implementation_pre (const_cast <Type const &> (o));
        }

        virtual void
        implementation_pre (Type const&);

        virtual void
        implementation_next (Type &o)
        {
          this->implementation_next (const_cast <Type const &> (o));
        }

        virtual void
        implementation_next (Type const&);

        virtual void
        implementation_post (Type &o)
        {
          this->implementation_post (const_cast <Type const &> (o));
        }

        virtual void
        implementation_post (Type const&);

        virtual void
        instance_pre (Type &o)
        {
          this->instance_pre (const_cast <Type const &> (o));
        }

        virtual void
        instance_pre (Type const&);

        virtual void
        instance_next (Type &o)
        {
          this->instance_next (const_cast <Type const &> (o));
        }

        virtual void
        instance_next (Type const&);

        virtual void
        instance_post (Type &o)
        {
          this->instance_post (const_cast <Type const &> (o));
        }

        virtual void
        instance_post (Type const&);

        virtual void
        connection_pre (Type &o)
        {
          this->connection_pre (const_cast <Type const &> (o));
        }

        virtual void
        connection_pre (Type const&);

        virtual void
        connection_next (Type &o)
        {
          this->connection_next (const_cast <Type const &> (o));
        }

        virtual void
        connection_next (Type const&);

        virtual void
        connection_post (Type &o)
        {
          this->connection_post (const_cast <Type const &> (o));
        }

        virtual void
        connection_post (Type const&);

        virtual void
        externalProperty_pre (Type &o)
        {
          this->externalProperty_pre (const_cast <Type const &> (o));
        }

        virtual void
        externalProperty_pre (Type const&);

        virtual void
        externalProperty_next (Type &o)
        {
          this->externalProperty_next (const_cast <Type const &> (o));
        }

        virtual void
        externalProperty_next (Type const&);

        virtual void
        externalProperty_post (Type &o)
        {
          this->externalProperty_post (const_cast <Type const &> (o));
        }

        virtual void
        externalProperty_post (Type const&);

        virtual void
        dependsOn_pre (Type &o)
        {
          this->dependsOn_pre (const_cast <Type const &> (o));
        }

        virtual void
        dependsOn_pre (Type const&);

        virtual void
        dependsOn_next (Type &o)
        {
          this->dependsOn_next (const_cast <Type const &> (o));
        }

        virtual void
        dependsOn_next (Type const&);

        virtual void
        dependsOn_post (Type &o)
        {
          this->dependsOn_post (const_cast <Type const &> (o));
        }

        virtual void
        dependsOn_post (Type const&);

        virtual void
        artifact_pre (Type &o)
        {
          this->artifact_pre (const_cast <Type const &> (o));
        }

        virtual void
        artifact_pre (Type const&);

        virtual void
        artifact_next (Type &o)
        {
          this->artifact_next (const_cast <Type const &> (o));
        }

        virtual void
        artifact_next (Type const&);

        virtual void
        artifact_post (Type &o)
        {
          this->artifact_post (const_cast <Type const &> (o));
        }

        virtual void
        artifact_post (Type const&);

        virtual void
        infoProperty_pre (Type &o)
        {
          this->infoProperty_pre (const_cast <Type const &> (o));
        }

        virtual void
        infoProperty_pre (Type const&);

        virtual void
        infoProperty_next (Type &o)
        {
          this->infoProperty_next (const_cast <Type const &> (o));
        }

        virtual void
        infoProperty_next (Type const&);

        virtual void
        infoProperty_post (Type &o)
        {
          this->infoProperty_post (const_cast <Type const &> (o));
        }

        virtual void
        infoProperty_post (Type const&);

        virtual void
        localityConstraint_pre (Type &o)
        {
          this->localityConstraint_pre (const_cast <Type const &> (o));
        }

        virtual void
        localityConstraint_pre (Type const&);

        virtual void
        localityConstraint_next (Type &o)
        {
          this->localityConstraint_next (const_cast <Type const &> (o));
        }

        virtual void
        localityConstraint_next (Type const&);

        virtual void
        localityConstraint_post (Type &o)
        {
          this->localityConstraint_post (const_cast <Type const &> (o));
        }

        virtual void
        localityConstraint_post (Type const&);

        protected:
        deploymentPlan ();
      };
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

#endif // CDP_HPP
