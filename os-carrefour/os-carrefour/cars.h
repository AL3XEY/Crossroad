//
/// \file cars.h
/// brief cars header
//
///  \author {  Gada Rezgui and  Alexandre FAUCHER}
/// \date 23/03/2015
//

#ifndef ____cars__
#define ____cars__

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <time.h>
#include "carrefour.h"
#include "ipcTools.h"
/**********************
 * \struct Car cars.h
 * \brief create a car.
 **********************/
typedef struct{
    int pid;
    int route;
    int index;
}Car;
Car genereCar(int route);
void carsCrossroad(Car car);
#endif /* defined(____cars__) */
