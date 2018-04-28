class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string s_bak;
        bool INOUT=true;
        int count[100000];//记录每次开始的最大串
        int max=0;
        int place=0;//记录插入位置
        //初始化记录
        for(int i=0;i<s.size();i++){
            count[i]=0;
        }
        
        for(int i=0;i<s.size();i++){
            //printf("\n在最大的for循环里面：%d\n",i);
            for(int j=i;j<s.size();j++){
                char tmp=s[j];
                if(s_bak.find(tmp)==string::npos&&s.find(s_bak)!=string::npos){
                    s_bak=s_bak.insert(place,1,tmp);
                    place++;
                    count[i]++;
                    //printf("%d:记录%d  ",i,count[i]);
                }
                else{    
                    //printf("break%d",count[i]);
                    break;
                }
                
            }
            place = 0;
            s_bak = "";                        
        }        
     printf("\n");

     for(int i=0;i<s.size();i++){
         if(max<=count[i]){
             max=count[i];
             
         }
         //printf("第%d趟，现在的最大值：%d\n",i,max);
     } 
    return max;
    }
};