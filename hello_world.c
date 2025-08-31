#include "neslib.h"
#include "vrambuf.h"
//#link "vrambuf.c"
//#link "chr_generic.s"


void main(void){
  
  int counter;
  
  oam_clear();
  
  pal_col(0, 0x26);
  pal_col(1, 0x0C);
  pal_col(3, 0x1C);
  
  vram_adr(NTADR_A(9, 14));
  vram_write("HELLO, WORLD!", 13);
 
  ppu_on_all();
  
  for(counter=0; counter<250; counter++){
    ppu_wait_frame();
  }
 
  ppu_off();
  
  while(1){
 
  }
  
}