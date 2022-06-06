#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
        };
        weapons[] = {
            "kat_etomidate",
            "kat_lidocaine",
            "kat_lorazepam",
            "kat_flumazenil"
            "kat_scalpel",
            "kat_retractor",
            "kat_clamp",
            "kat_vacuum"
        };
        magazines[] = { };
        requiredAddons[] = {
            "ace_medical",
            "ace_medical_ai",
            "ace_medical_blood",
            "ace_medical_damage",
            "ace_medical_engine",
            "ace_medical_feedback",
            "ace_medical_gui",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
            "ace_dogtags",
            "cba_settings"
        };
        author = "2LT.Mazinski";
        authors[] = {"2LT.Mazinski"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
