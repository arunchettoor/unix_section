#include <stdio.h>

#include <iostream>

#include <fstream>

#include <algorithm>


using namespace std;


int main(int argc, char **argv)
{
  
streampos size;
  
char * memblock;
  
char * _start ="PHOTO";
  
char* _end = "END:";
  
int count=0;

  
ifstream file ("C:\\Users\\chettormana\\Documents\\Arun\\contacts\\nopic.vcf", ios::in|ios::binary|ios::ate);
  
ofstream outfile ("C:\\Users\\chettormana\\Documents\\Arun\\contacts\\new.vcf",std::ofstream::binary);
  
if (file.is_open())
  {
    
size = file.tellg();
    
memblock = new char [size];
    
file.seekg (0, ios::beg);
    
file.read (memblock, size);
    
file.close();

for(int i=0;i<size; i++){
	
if(memblock[i] == _start[0] && memblock[i+1] == _start[1] && memblock[i+2] == _start[2] && memblock[i+3] == _start[3]){
		
count++;
		
for(;i<size; i++){
			
if(memblock[i] == _end[0] && memblock[i+1] == _end[1] && memblock[i+2] == _end[2])
				
break;
			
else{
				
memblock[i] = ' ';
			
}						
		
}
					
	
}
}

std::string _mems(memblock,size);

	
_mems.erase(std::remove(_mems.begin(), _mems.end(), ' '), _mems.end());
    
cout << "the entire file content is in memory and it is "<<count;
	
outfile<<_mems;
	//outfile.write (memblock,size);
	
_mems.clear();
    delete[] memblock;
	
outfile.close();
  
}
  
else 
cout << "Unable to open file";
  
return 0;

}
