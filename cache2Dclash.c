#define GLOBAL_N 10

int arr2D[128][8];

int main(){
	for(int a = 0; a < 100; a++){
		for(int i = 0; i < 128; i = i + 64){
			for(int j = 0; j < 8; j++){
				arr2D[i][j] = a + i + j;
			}
		}
	}
}
