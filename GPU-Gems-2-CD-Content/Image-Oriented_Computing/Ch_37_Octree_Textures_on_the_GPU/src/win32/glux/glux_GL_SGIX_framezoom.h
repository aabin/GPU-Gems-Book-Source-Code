
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_SGIX_framezoom__
#define __GLUX_GL_SGIX_framezoom__

GLUX_NEW_PLUGIN(GL_SGIX_framezoom);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_FRAMEZOOM_SGIX
#  define GL_FRAMEZOOM_SGIX 0x818B
#endif
#ifndef GL_FRAMEZOOM_FACTOR_SGIX
#  define GL_FRAMEZOOM_FACTOR_SGIX 0x818C
#endif
#ifndef GL_MAX_FRAMEZOOM_FACTOR_SGIX
#  define GL_MAX_FRAMEZOOM_FACTOR_SGIX 0x818D
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glFrameZoomSGIX
typedef void (APIENTRYP PFNGLUXFRAMEZOOMSGIXPROC) (GLint factor);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glFrameZoomSGIX
extern PFNGLUXFRAMEZOOMSGIXPROC glFrameZoomSGIX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
