#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED
#define getName(var)  #var
/*




                          _                        __    __  
   __  ______ ___________(_)___  _________  ____  / /_  / /_ 
  / / / / __ `/ ___/ ___/ / __ \/ ___/ __ \/ __ \/ __/ / __ \
 / /_/ / /_/ (__  |__  ) / / / / /  / /_/ / /_/ / /__ / / / /
 \__, /\__,_/____/____/_/_/ /_/_/   \____/\____/\__(_)_/ /_/ 
/____/                                                       





Copyright Yassine Ben Alaya


benalayassine@gmail.com


*/

// A function that declares an array with variable length use int* b=var_array(n);
int* var_intarray(int n){
  int* A = (int*)malloc(n* sizeof(int));
   return A;
}

// A function that declares an array of chars with variable length use char* b=var_array(n);

char* var_chararray(int n){
  char* A = (char*)malloc(n* sizeof(int));
   return A;
}
// A function that declares an array of floats with variable length use float* b=var_array(n);

float* var_floatarray(int n){
  float* A = (float*)malloc(n* sizeof(int));
   return A;
}
// A function that declares an array of floats with variable length use double* b=var_array(n);
double* var_doublearray(int n){
  double* A = (double*)malloc(n* sizeof(int));
   return A;
}
// A function that declares an array of unsigned chars with variable length use unsigned char* b=var_array(n);
unsigned char* var_unsignedchararray(int n){
  unsigned char* A = (unsigned char*)malloc(n* sizeof(int));
   return A;
}
// A function that declares an array of signed chars with variable length use signed char* b=var_array(n);
signed char* var_signedchararray(int n){
  signed char* A = (signed char*)malloc(n* sizeof(int));
   return A;
}


// A function that removes a substring another one
void remove_substr(char *s,const char *toremove){
  while( s=strstr(s,toremove) )
    memmove(s,s+strlen(toremove),1+strlen(s+strlen(toremove)));
}

// fill in an array of integers
void fillin_intarray(int* array,int begin,int end){
int i;
for(i=begin;i<=end;i++){
printf("Type in %s[%d]:",getName(array),i);
scanf("%d",&array[i]);
}}
// fill in an array of floats
void fillin_floatarray(float* array,int begin,int end){
int i;
for(i=begin;i<=end;i++){
printf("Type in %s[%d]:",getName(array),i);
scanf("%f",&array[i]);
}}
// fill in an array of doubles
void fillin_doublearray(double* array,int begin,int end){
int i;
for(i=begin;i<=end;i++){
printf("Type in %s[%d]:",getName(array),i);
scanf("%lf",&array[i]);
}}
// fill in an array of chars
void fillin_chararray(char* array,int begin,int end){
int i;
for(i=begin;i<=end;i++){
printf("Type in %s[%d]:",getName(array),i);
scanf("%c",&array[i]);
printf("%c",array[i]);
}}
// fill in an array of unsigned chars
void fillin_unsignedchararray(unsigned char* array,int begin,int end){
int i;
for(i=begin;i<=end;i++){
printf("Type in %s[%d]:",getName(array),i);
scanf("%c",&array[i]);
printf("%c",array[i]);
}}
// fill in an array of unsigned chars
void fillin_signedchararray(signed char* array,int begin,int end){
int i;
for(i=begin;i<=end;i++){
printf("Type in %s[%d]:",getName(array),i);
scanf("%c",&array[i]);
printf("%c",array[i]);
}}

//returns the maximum in an array of integers

int int_max(int* array,int begin,int end){
int i;
int maximum=array[0];

for(i=begin;i<=end;i++)
  if(array[i]>maximum)
   maximum=array[i];
return maximum;
}
//returns the maximum in an array of floats
float float_max(float* array,int begin,int end){
int i;
float maximum=array[0];

for(i=begin;i<=end;i++)
  if(array[i]>maximum)
   maximum=array[i];
return maximum;
}
//returns the maximum in an array of doubles
double double_max(double* array,int begin,int end){
int i;
double maximum=array[0];

for(i=begin;i<=end;i++)
  if(array[i]>maximum)
   maximum=array[i];
return maximum;
}

//returns the minimum in an array of integers
int int_min(int* array,int begin,int end){
int i;
int minimum=array[0];

for(i=begin;i<=end;i++)
  if(array[i]<minimum)
   minimum=array[i];
return minimum;
}



//returns the minimum in an array of floats
float float_min(float* array,int begin,int end){
int i;
float minimum=array[0];

for(i=begin;i<=end;i++)
  if(array[i]<minimum)
   minimum=array[i];
return minimum;
}

//returns the minimum in an array of doubles
double double_min(double* array,int begin,int end){
int i;
double minimum=array[0];

for(i=begin;i<=end;i++)
  if(array[i]<minimum)
   minimum=array[i];
return minimum;
}

#endif // UTILITIES_H_INCLUDED
