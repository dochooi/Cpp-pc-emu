#pragma region 
#include<stdio.h>




#include<iostream>


#pragma endregion Region_1
using namespace std;

typedef uint_least8_t u8;
typedef  int_least8_t s8;
typedef uint_least16_t opcode;

typedef int ram;
typedef enum{CPUISON,CPUISOFF}cpubool;


int main()
{
  
  cpubool ison = CPUISON;
  ram RAM = 4;
  u8 PC;
  s8 CPU;
  PC=0x000000;
  CPU=0x000001;
  opcode cmd=0x000000;
  if(CPU == 0x000001)
  {
    ison = CPUISON;
  
   if( cmd == 0x000000 )
   {
    cout << "Hello world!\n" << endl;
    return 0;
    
   }
   else if( cmd = 0x000001)
   {
    FILE*file_ptr; int i;
    char text[20] = {"CAU is called:Cppu "};
    file_ptr = fopen("Output.txt","w");
    if(file_ptr != NULL)
    {
      //Add Rext To File "Output.txt"
      for(i = 0; text[i]; i++){ fputc( text[i], file_ptr);}
      scanf("Ram Overload!");
      return 1;
       
    }
    else
    {
      cout << "Opcode dosent exist! On CPPU"
    }
    
    
   }
  }  
  else if(CPU != 0x000001  )
  {
    printf("Cpu Is Off Because Of Cpu Code");
  }       
 
  
       
      
       

       
     
  
  
}


