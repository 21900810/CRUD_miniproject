#include "manager.c"

int main(void){

	H_delivery* H[100];
	int curcount = 0, count = 0, menu;
	
	count = loaddatadelivery(H);
	curcount = count ; 
	
	while(1){
		menu = selectdelivery();
		getchar();
		if(menu == 0) break;
		if(menu == 1 || menu == 3 || menu == 4){
			if(count == 0){printf("데이터가 없습니다!\n"); continue;}
			}
		if(menu == 1) listdatadelivery(H, curcount);
		else if(menu == 2){
			count += adddelivery(&H[curcount++]);
		}
		else if(menu == 3){
			int no = selectDataNo(H, curcount);
			if(no == 0){
				printf("=> 취소되었습니다!"); continue;
			}
			updateProduct(&H[no-1]);
		}
		else if(menu == 4){
			int no = selectDataNo(H, curcount);
			int (no == 0){
				printf("=> 취소되었습니다!");
				continue;
			}
		}

	}
}
