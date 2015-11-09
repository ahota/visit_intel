/* include/visit-config.h.in.  Generated from configure.in by autoheader.  */

/*******************************************************************************
 * Optional I/O libraries
 ******************************************************************************/

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if you have the cgns library. */
/* #undef HAVE_LIBCGNS */

/* Define if you have the gdal library. */
/* #undef HAVE_LIBGDAL */

/* Define if you have hdf4. */
/* #undef HAVE_LIBHDF4 */

/* Define if you have hdf5. */
#define HAVE_LIBHDF5

/* Define if you have the netcdf library. */
#define HAVE_LIBNETCDF

/* Define if you have the netcdf header. */
/* #undef HAVE_NETCDF_H */

/* Define if you have pdb. */
/* #undef HAVE_LIBPDB */

/* Define if you are using PDB proper instead of PDB lite. */
/* #undef HAVE_PDB_PROPER */

/* Define if you have silo. */
#define HAVE_LIBSILO

/* Define to identify the variant of PDB Lite (in silo) */
/* #undef PDB_LITE_HAS_LONG_LONG */

/*******************************************************************************
 * Optional libraries
 ******************************************************************************/

/* Define if you have the boost interval template library. */
#define HAVE_BILIB

/* Define if you have the EAVL library. */
/* #undef HAVE_LIBEAVL */

/* Define if you have the FastBit library. */
/* #undef HAVE_LIBFASTBIT */

/* Define if you have the GLEW library. */
/* #undef HAVE_LIBGLEW */

/* Define to 1 if you have the `m' library (-lm). */
/* #undef HAVE_LIBM */

/* Define if you have the MFEM library. */
/* #undef HAVE_LIBMFEM */

/* Define if you have the R library. */
/* #undef HAVE_LIB_R */

/* Define if you have the X11 library */
#define HAVE_LIBX11

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_LIBZ */

/* Define if you have the OSMESA */
/* #undef HAVE_OSMESA */

/*******************************************************************************
 * Header file checks
 ******************************************************************************/

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if socklen_t is defined. */
#define HAVE_SOCKLEN_T

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if you have the pthread library. */
#define HAVE_THREADS

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/*******************************************************************************
 * Prototype checks
 ******************************************************************************/

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the `div' function. */
/* #undef HAVE_DIV */

/* Define if you have the prototype for ftime in the <sys/timeb.h>. */
#define HAVE_FTIME_PROTOTYPE

/* Define if you have isfinite. */
#define HAVE_ISFINITE

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* Define if you have the prototype for strtof in the <stdlib.h>. */
#define HAVE_STRTOF_PROTOTYPE



/*******************************************************************************
 * Package information
 ******************************************************************************/

/* Define to the address where bug reports for this package should be sent. */
/* #undef PACKAGE_BUGREPORT */

/* Define to the full name of this package. */
/* #undef PACKAGE_NAME */

/* Define to the full name and version of this package. */
/* #undef PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
/* #undef PACKAGE_TARNAME */

/* Define to the version of this package. */
/* #undef PACKAGE_VERSION */

/*******************************************************************************
 * Platform information
 ******************************************************************************/

/* The size of `boolean', as computed by sizeof. */
/* #undef SIZEOF_BOOLEAN */

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT  4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE 16

/* The size of a `long double', as computed by sizeof. */
/* #undef SIZEOF_LONG_FLOAT */

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `unsigned char', as computed by sizeof. */
#define SIZEOF_UNSIGNED_CHAR 1

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 8

/* The size of `unsigned long long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG_LONG 8

/* The size of `unsigned short', as computed by sizeof. */
#define SIZEOF_UNSIGNED_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* The size of a `off64_t', as computed by sizeof. */
#define SIZEOF_OFF64_T 8

/* Define the slash character */
#define VISIT_SLASH_CHAR '/'

/* Define the slash string */
#define VISIT_SLASH_STRING "/"

/* Define the plugin extension string */
#define VISIT_PLUGIN_EXTENSION ".so"

/* Define VISIT_USE_PTY if we want to use PTYs. */
#define VISIT_USE_PTY

/* Define PTY_SYSV if we have System V style pty functions -- BSD otherwise. */
#define PTY_SYSV

/* Define NO_SETBUF if streambuf::setbuf is not public. */
#define NO_SETBUF

/* Define if we want to use VisIt's no-spin BCast. */
#define VISIT_USE_NOSPIN_BCAST

/* VisIt version */
#define VISIT_VERSION "2.8.1"

/* Plugin version macro */
#define VISIT_PLUGIN_VERSION_NAME(A,B) A##B
#ifdef _WIN32
/* We need the extern "C" on Windows. */
#define VISIT_PLUGIN_VERSION(NAME, EXPORTMACRO) extern "C" EXPORTMACRO const char *VISIT_PLUGIN_VERSION_NAME(NAME,VisItPluginVersion) = VISIT_VERSION;
#else
#define VISIT_PLUGIN_VERSION(NAME, EXPORTMACRO) EXPORTMACRO const char *VISIT_PLUGIN_VERSION_NAME(NAME,VisItPluginVersion) = VISIT_VERSION;
#endif

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */
/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */

/* NEED TO CHECK OF MORE NEEDS TO BE DONE FOR THIS OR IF THE CMAKE DEFINE
   ABOVE WILL BE SUFFICIENT 
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif
*/

/* Define the largest image that VisIt can save. */
#define VISIT_RENDERING_SIZE_LIMIT 16384

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Disable ssh tunneling on Panther. */
/* #undef PANTHERHACK */

/* Force ssh tunneling. */
/* #undef VISIT_FORCE_SSH_TUNNELING */

/* Force WinMain entry point on applications. */
/* #undef VISIT_WINDOWS_APPLICATION */
