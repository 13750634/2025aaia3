//week07-4.cpp Simulation ��4�D
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions+instructions+instructions+instructions;
        int x=0, y=0; //x�y�СAy�y��
        int d = 0;//d: ��Vdirection 0:�_ 1:�F 2:�n 3:��
        // �k�� d = (d+1) % 4 ��4���l��
        // ���� d = (d-1+4)%4
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        for(char c : instructions){
            if(c=='G'){
                x += dx[d];
                y += dy[d];
            }
            else if(c=='R'){
                d = (d+1) % 4;
            }
            else if(c=='L'){
                d = (d+3) % 4;
            }
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
