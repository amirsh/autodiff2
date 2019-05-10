
//#   if defined(__cplusplus)
//        extern "C" {
//#   endif

/* #define WITH_LABELS 1  */

/** Re-base restored pointers *pp (and possibly it adjoint *ppb) from their
 * old base from the forward sweep to their new base in the backward sweep.
 * When new base is not available yet, schedules this to be done later
 * when a new base is allocated.
 * Usage: restoring a pointer pp (i.e. declared as T* pp ;) creates in the backward sweep:
 *  poppointer8((void**)(&pp)) ;
 *  and/or possibly:
 *  poppointer8((void**)(&ppb)) ;
 *  then add after these pop(s):
 *  ADMM_RebaseShadowed((void**)(&pp), (void**)(&ppb)) ;
 *  or if no ppb:
 *  ADMM_Rebase((void**)(&pp)) ;
 */
void ADMM_RebaseShadowed(void **pp, void **ppb
#ifdef WITH_LABELS
, char *label
#endif
);
void ADMM_Rebase(void **pp
#ifdef WITH_LABELS
, char *label
#endif
);

/** Register a newly allocated memory chunk in the forward sweep (when obase==null or ==base),
 * or register a newly allocated memory chunk "base" in the backward sweep relating it
 * with its corresponding chunk from the forward sweep "obase".
 * "sizeInBytes" is the total size in bytes of the allocated chunk.
 * When the corresponding derivative chunks exist separately ("Shadowed" mode),
 * then do the same with the info about the derivative
 * chunks "baseb", "obaseb" and "sizeInBytesb".
 * "nbElements" is the length i.e. the number of elements of the allocated array. */
void ADMM_RegisterShadowed(void *base, void *obase, int sizeInBytes, void *baseb, void *obaseb, int sizeInBytesb, int nbElements
#ifdef WITH_LABELS
, char *label
#endif
) ;
void ADMM_Register(void *base, void *obase, int sizeInBytes, int nbElements
#ifdef WITH_LABELS
, char *label
#endif
) ;

/** Unregister a memory chunk, which must be done when this chunk is about to be deallocated.
 * Returns in "nbElements" the length i.e. the number of elements of the array
 * that is about to be deallocated. */
void ADMM_UnregisterShadowed(void *base, void *baseb, int *nbElements
#ifdef WITH_LABELS
, char *label
#endif
) ;
void ADMM_Unregister(void *base, int *nbElements
#ifdef WITH_LABELS
, char *label
#endif
) ;

//#   if defined(__cplusplus)
//        }
//#   endif
