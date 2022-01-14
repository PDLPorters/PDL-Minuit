#define PDL_APPEND2(x, y) PDL_APPEND(x, y) /* forces expansion of args */
#define PDL_APPEND(x, y) x ## y
#define PDL_FORTRAN(x) PDL_APPEND2(x, PDL_USCORE)

#define MNINIT PDL_FORTRAN(mninit)
#define MNSETI PDL_FORTRAN(mnseti)
#define MNPARM PDL_FORTRAN(mnparm)
#define MNPARS PDL_FORTRAN(mnpars)
#define MNEXCM PDL_FORTRAN(mnexcm)
#define MNCOMD PDL_FORTRAN(mncomd)
#define MNPOUT PDL_FORTRAN(mnpout)
#define MNSTAT PDL_FORTRAN(mnstat)
#define MNEMAT PDL_FORTRAN(mnemat)
#define MNERRS PDL_FORTRAN(mnerrs)
#define MNCONT PDL_FORTRAN(mncont)
#define ABRE   PDL_FORTRAN(abre)
#define CIERRA PDL_FORTRAN(cierra)

#include "EXTERN.h"
#include "perl.h"
#include "pdl.h"
#include "pdlcore.h"

#define PDL PDL_Minuit
extern Core *PDL;
extern SV* mnfunname;
extern PDL_Indx ene;

extern void MNINIT(PDL_Indx*,PDL_Indx*,PDL_Indx*);
extern void MNSETI(char*,PDL_Indx);
extern void MNPARM(PDL_Indx*,char*,double*,double*,double*,double*,PDL_Indx*,PDL_Indx);
extern void MNEXCM(void* f,char*,double*,PDL_Indx*,PDL_Indx*,double* futil,PDL_Indx);
extern void MNPOUT(PDL_Indx*,char*,double*,double*,double*,double*,PDL_Indx*,PDL_Indx);
extern void MNSTAT(double*,double*,double*,PDL_Indx*,PDL_Indx*,PDL_Indx*);
extern void MNEMAT(double*,PDL_Indx*); /* Matrix here! */
extern void MNERRS(PDL_Indx*,double*,double*,double*,double*);
extern void MNCONT(void* f,PDL_Indx*,PDL_Indx*,PDL_Indx*,double*,double*,PDL_Indx*,double* futil);

extern void ABRE(PDL_Indx*,char*,char*,PDL_Indx,PDL_Indx);
extern void CIERRA(PDL_Indx*);

void FCN(PDL_Indx* npar,double* grad,double* fval,double* xval,int* iflag,double* futil);
