#include <stdio.h>
#include <string.h>
#include <sys/sysinfo.h>
#include <cstdint>



uint64_t GetPhysicalMemorySize() {
  struct sysinfo info;
  sysinfo( &info );
  return (size_t)info.totalram * (size_t)info.mem_unit;
}

void get_mapping_size() {


}



void map_memory() {
    void* mapping_size;
    double fraction_of_physical_memory = 0.3;

    mapping_size = 
    static_cast<uint64_t>((static_cast<double>(GetPhysicalMemorySize()) * 
          fraction_of_physical_memory));

}


int main() {
    map_memory();

    return 0;
}