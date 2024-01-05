#pragma once

#include "../../../../../Headers/Math/Quaternion.hpp"

#include <type_traits>
#include <Refureku/TypeInfo/Entity/DefaultEntityRegisterer.h>
#include <Refureku/TypeInfo/Archetypes/ArchetypeRegisterer.h>
#include <Refureku/TypeInfo/Namespace/Namespace.h>
#include <Refureku/TypeInfo/Namespace/NamespaceFragment.h>
#include <Refureku/TypeInfo/Namespace/NamespaceFragmentRegisterer.h>
#include <Refureku/TypeInfo/Archetypes/Template/TypeTemplateParameter.h>
#include <Refureku/TypeInfo/Archetypes/Template/NonTypeTemplateParameter.h>
#include <Refureku/TypeInfo/Archetypes/Template/TemplateTemplateParameter.h>

namespace rfk::generated { 
 static rfk::NamespaceFragment const& getNamespaceFragment_2309996934464676284u_13483898140298516202() noexcept {
static rfk::NamespaceFragment fragment("Math", 2309996934464676284u);
static bool initialized = false;
if (!initialized) {
initialized = true;
}
return fragment; }
static rfk::NamespaceFragmentRegisterer const namespaceFragmentRegisterer_2309996934464676284u_13483898140298516202(rfk::generated::getNamespaceFragment_2309996934464676284u_13483898140298516202());
 }

