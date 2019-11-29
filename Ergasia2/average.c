#include <stdlib.h>
#include "structs.h"

float average_dist(int vec_sum, int coords, struct vec *vectors){
	int i, j, z, dist, min, min_pos, aver;

	aver=0;
	min=1000000;
	min_pos=-1;
	dist=0;
	for(z=0; z<100; z++){				// Gia ta prwta 100 dianusmata tou input
		for(i=0; i<vec_sum; i++){		// Vriskoume ton actual kontinotero geitona
			for(j=0; j<coords; j++){
				dist+=abs(vectors[z].coord[j]-vectors[i].coord[j]);
			}
			if(min>dist && z!=i){
				min=dist;
				min_pos=i;
			}
			dist=0;
		}
		aver+=min;
		min=1000000;
	}
	return (float) aver/100;
}