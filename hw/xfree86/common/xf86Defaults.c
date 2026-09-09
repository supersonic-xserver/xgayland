/* Minimal stub definitions for default mode tables required by the build.
 * The upstream source generates these tables automatically, but they are
 * missing from this checkout. Providing an empty table is sufficient for the
 * server to compile and run; it simply means no built‑in default modes will be
 * available.
 */

#include "xf86Priv.h"

/* Empty default mode list */
const DisplayModeRec xf86DefaultModes[] = { { 0 } };
const int xf86NumDefaultModes = 0;
