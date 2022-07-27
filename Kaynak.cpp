#include<stdio.h>
int main()
{
	FILE *dosya;
	dosya = fopen("%s.texture_set.json", "w");
	char x[20];
	printf("block:"); 
	gets_s(x);
	fprintf(dosya, "{\n		\"format_version\": \"1.16.100\",\n			\"minecraft:texture_set\" : {\n			\"color\": \" %s \",\n				\"metalness_emissive_roughness\" : \" %s _mer\",\n				\"heightmap\" : \" %s _normal\"\n		}\n}", x, x, x);
	fclose(dosya);
}	