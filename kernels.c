/********************************************************
 * Kernels to be optimized for the CS:APP Performance Lab
 ********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
/*
 * Please fill in the following student struct
 */
team_t team = {
    "2237477",              /* Student ID */

    "Utku Gungor",     /* full name */
    "e223747@metu.edu.tr",  /* email address */

    "",                   /* leave blank */
    ""                    /* leave blank */
};


/***************
 * Sobel KERNEL
 ***************/

/******************************************************
 * Your different versions of the sobel functions  go here
 ******************************************************/

/*
 * naive_sobel - The naive baseline version of Sobel
 */
char naive_sobel_descr[] = "sobel: Naive baseline implementation";
void naive_sobel(int dim,int *src, int *dst) {
    int i,j;
    for(j = 0; j < dim-3 ; j+=4)
        for(i = 0; i < dim - 3; i+=4) {
                           int loc1 = j*dim+i;
                           int loc2 = loc1+dim;
                           int loc3 = loc2+dim;
                           int loc4 = loc3+dim;
                           int *temp = src+loc1-1;
                           dst[loc1]=0;
                           dst[loc2]=0;
                           dst[loc3]=0;
                           dst[loc4]=0;
                if(!((i == 0))){

               	      if(j != 0) *(dst+loc1)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                      temp += dim;
  		                *(dst+loc2)=*(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                      temp += dim;
                      *(dst+loc3)=*(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                                    if(j+3 != dim-1){
                                                      temp += dim;
                                    		              *(dst+loc4)=*(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                                      }
                        }
                        ++loc1;
                        loc2=loc1+dim;
                        loc3=loc2+dim;
                        loc4=loc3+dim;
                        dst[loc1]=0;
                        dst[loc2]=0;
                        dst[loc3]=0;
                        dst[loc4]=0;

                              temp = src+loc1-1;
                       	      if(!(j == 0))   *(dst+loc1)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                              temp += dim;
          		                *(dst+loc2)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                              temp += dim;
                              *(dst+loc3)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                      if(j+3 != dim-1){
                                          temp += dim;
                                          *(dst+loc4)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                                              }

                                ++loc1;
                                loc2=loc1+dim;
                                loc3=loc2+dim;
                                loc4=loc3+dim;
                                dst[loc1]=0;
                                dst[loc2]=0;
                                dst[loc3]=0;
                                dst[loc4]=0;

                                      temp = src+loc1-1;
                                      if(!(j == 0))   *(dst+loc1)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                      temp += dim;
                                      *(dst+loc2)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                      temp += dim;
                                      *(dst+loc3)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                            if(j+3 != dim-1){
                                                    temp += dim;
                                                    *(dst+loc4)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                                                      }

                                      ++loc1;
                                      loc2=loc1+dim;
                                      loc3=loc2+dim;
                                      loc4=loc3+dim;
                                      dst[loc1]=0;
                                      dst[loc2]=0;
                                      dst[loc3]=0;
                                      dst[loc4]=0;
                                      if(i + 3 != dim-1){
                                            temp = src+loc1-1;
                                            if(!(j == 0))   *(dst+loc1)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                            temp += dim;
                                            *(dst+loc2)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                            temp += dim;
                                            *(dst+loc3)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                                        if(j+3 != dim-1){
                                                            temp += dim;
                                                            *(dst+loc4)= *(temp-dim) * (-1) + *(temp) * (-2) +  *(temp+dim) * (-1) +  *(temp-dim+2) + *(temp+2) * 2 + *(temp+dim+2);
                                                                              }
                                                }
      	     }
}
/*
 * sobel - Your current working version of sobel
 * IMPORTANT: This is the version you will be graded on
 */

char sobel_descr[] = "Dot product: Current working version";
void sobel(int dim,int *src,int *dst)
{

       naive_sobel(dim,src,dst);

}

/*********************************************************************
 * register_sobel_functions - Register all of your different versions
 *     of the sobel functions  with the driver by calling the
 *     add_sobel_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.
 *********************************************************************/

void register_sobel_functions() {
    add_sobel_function(&naive_sobel, naive_sobel_descr);
    add_sobel_function(&sobel, sobel_descr);
    /* ... Register additional test functions here */
}




/***************
 * MIRROR KERNEL
 ***************/

/******************************************************
 * Your different versions of the mirror func  go here
 ******************************************************/

/*
 * naive_mirror - The naive baseline version of mirror
 */
char naive_mirror_descr[] = "Naive_mirror: Naive baseline implementation";
void naive_mirror(int dim,int *src,int *dst) {

 	int i,j;

  for(j = 0; j < dim-1; j+=2)
        for(i = 0; i < dim-15; i+=16) {
            int *temp = dst + RIDX(j,i,dim);
            int *temp2 = src + RIDX(j,dim-1-i,dim);
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);

            temp=dst+RIDX(j,i,dim)+dim;
            temp2 = src + RIDX(j,dim-1-i,dim)+dim;

            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);
            temp++;
            temp2--;
            *(temp)=*(temp2);

        }
}

/*
 * mirror - Your current working version of mirror
 * IMPORTANT: This is the version you will be graded on
 */
char mirror_descr[] = "Mirror: Current working version";
void mirror(int dim,int *src,int *dst)
{


 	naive_mirror(dim,src,dst);

}

/*********************************************************************
 * register_mirror_functions - Register all of your different versions
 *     of the mirror functions  with the driver by calling the
 *     add_mirror_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.
 *********************************************************************/

void register_mirror_functions() {
    add_mirror_function(&naive_mirror, naive_mirror_descr);
    add_mirror_function(&mirror, mirror_descr);
    /* ... Register additional test functions here */
}
