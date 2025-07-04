#include <stdio.h>
#include <string.h>
#include <sys/sysinfo.h>





//calculate memory sizes
//break the memory down into chuncks(page maps) and fill thme


//pread the bytes from the page desciptor(collection of pages maps) at a offset(pagination)



uint64_t GetPhysicalMemorySize() {
  struct sysinfo info;
  sysinfo( &info );
  return (size_t)info.totalram * (size_t)info.mem_unit;
}


void create_memory_map() {
    int mapping_size = 1024*256;

    *mapping_size = 
    static_cast<uint64_t>((static_cast<double>(GetPhysicalMemorySize()) * 
          fraction_of_physical_memory));



}



int main() {
      
    

    //goal is to rewrite or read the value at y


    return 0;
}


