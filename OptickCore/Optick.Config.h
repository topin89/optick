#pragma once
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// GLOBAL SETTINGS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MASTER SWITCH - use it for disabling profiler in final builds															  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef USE_OPTICK																											  
#define USE_OPTICK (1)																										  
#endif																														
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#if USE_OPTICK
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Enable Low-level platform-specific tracing (Switch Contexts, Autosampling, etc.)											  //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef OPTICK_ENABLE_TRACING
#define OPTICK_ENABLE_TRACING (1)
#endif
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif