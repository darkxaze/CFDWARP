#ifndef _MODEL_SHARE_H
#define _MODEL_SHARE_H

#include <model/_model.h>
#include <src/common.h>

#define ACCURACY_FIRSTORDER 1
#define ACCURACY_SECONDORDER 2
#define ACCURACY_THIRDORDER 3

double _f_extrapol(int ACCURACY, ...);

double _f_symmetry(int ACCURACY, ...);


#endif /* _MODEL_SHARE_H */
