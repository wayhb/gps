#ifndef GPSCOORDINATES_GLOBAL_H
#define GPSCOORDINATES_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GPSCOORDINATES_LIBRARY)
#  define GPSCOORDINATES_EXPORT Q_DECL_EXPORT
#else
#  define GPSCOORDINATES_EXPORT Q_DECL_IMPORT
#endif

#endif // GPSCOORDINATES_GLOBAL_H
