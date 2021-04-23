#include <sys/ioctl.h>
#include <termios.h>
#include <bits/stdc++.h>
using namespace std;

const int width = 50;                      
const int height= 25;                      
const char block='#';                      
const char* clearcommand = "clear";        


int background[height][width];   
int snake[50][2];               
int food[2]={0,0};              
int score = 0;                  
int snakelen = 3;               
int snakemovementspeedx = 1;    
int snakemovementspeedy = 1;    
int lap=200;                    
int bytesWaiting, i;
int px,py,nx, ny;
char k;
int h,w;
int x,y;
int movementx=snakemovementspeedx;                
int movementy=0;                

int _kbhit() {
    static const int STDIN = 0;
    static bool initialized = false;

    if (! initialized) {
        
        termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initialized = true;
    }

    
    ioctl(STDIN, FIONREAD, &bytesWaiting);
    return bytesWaiting;
}


void initialise_background(void){
    

    
    for(i=0; i<width; i++){
        background[0][i]=1;

    }

    
    for(i=0; i<height; i++){
        background[i][0]=1;

    }


    
    for(i=0; i<height; i++){
        background[i][width-1]=1;

    }


    
    for(i=0; i<width; i++){
        background[height-1][i]=1;

    }

}




void initialise_snake(void){

    snake[0][0]=3; 
    snake[0][1]=3; 

    snake[1][0]=3+1; 
    snake[1][1]=3; 

    snake[2][0]=3+2; 
    snake[2][1]=3; 


    snake[3][0]=3+3; 
    snake[3][1]=3; 


    snake[4][0]=3+4; 
    snake[4][1]=3; 

}

void update_snake_coordination(void){
    
    px = snake[0][0];
    py = snake[0][1];
    snake[0][0] = px + movementx;
    snake[0][1] = py + movementy;
    nx =snake[0][0];
    ny =snake[0][1];

    for(i=1; i<snakelen; i++){
        nx = snake[i][0];
        ny = snake[i][1];
        snake[i][0]=px;
        snake[i][1]=py;
        px = nx;
        py = ny;



    }
}

void draw_snake_in_background(const int rev){
    

    for(i=0; i<snakelen; i++){
        x = snake[i][0];
        y = snake[i][1];
        if((x!=0)&&(y!=0)){
        background[y][x]=rev;
        }

    }

}

void print_array_frame(void){

    for(h=0; h<height; h++){

        for(w=0; w<width; w++){
            i=background[h][w];

            if(i==1){
            cout << block;
            }else if (i==2){
            cout << "+";
            }else{
            cout << " ";
            }

        }
        cout << endl;


    }


}

void clear_background(void){
    system(clearcommand);
}

void mainloop(void){

    clear_background();          
    draw_snake_in_background(1); 
    print_array_frame();         
    draw_snake_in_background(0); 

}

void sleepcp(int milliseconds) 
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
    }
}

void reaction_on_keyboard(const char k){
    if(k=='d'||k=='6'){
        
        movementx = snakemovementspeedx;
        movementy = 0;


    }else if(k=='a'||k=='4'){
        
        movementx = -snakemovementspeedx;
        movementy = 0;

    }else if(k=='w'||k=='8'){

        
        movementx = 0;
        movementy = -snakemovementspeedy;

    }else if(k=='s'||k=='2'){
        
        movementx = 0;
        movementy = snakemovementspeedy;


    }else if(k=='q'||k=='z'||k=='c'){
        cout << "[+] Exit Safely [+]"<<endl;
        exit(0);
    }

}

void cook_food(void){

    if (food[0]==0){
        x = rand() % width + 1;
        y = rand() % height + 1;
        food[0] = x;
        food[1] = y;
        background[y][x]=2;
    }


}

void capture_food(void){

        x=food[0];
        y=food[1];

        if ((x==snake[0][0])&&(y==snake[0][1])){
            background[y][x]=0;
            food[0]=0;
            score++;
            snakelen++;
            cook_food();

        }



}

void check_over_lapping(void){
    
    px = snake[0][0];
    py = snake[0][1];

    if((px==0)||(px==(width-1))||(py==0)||(py==(height-1))){

    cout << "[+]        Game Over           [+]" << endl;
    exit(0);

    }

}

void loop(void){
    int frame=0;
    x=0;
    y=0;

    while(x<500){
        sleepcp(lap);

        if(_kbhit())   
        {
        cin >> k; 
        reaction_on_keyboard(k);
        }

        mainloop();                 
        update_snake_coordination();
        check_over_lapping();       
        cook_food();                
        capture_food();             
        cout << "< Frame : " << frame << "  | Score  : " << score << " > "<< endl; 
        frame++;
    }

}

int main(){

    initialise_background(); 
    initialise_snake();      
    loop();                 
}