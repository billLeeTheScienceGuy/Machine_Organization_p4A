#define GLOBAL_N 10

int arr2D[3000][500];

int main(){
	 for(int j = 0; j < 500; j++){
		for(int i = 0; i < 3000; i++){

			arr2D[i][j] = i + j;
		}
	}
}
