/*
in this case I have merged both the arrays and then sorted the array.
After sorting the array I have counted the occurence of the numbers to get union and intersection
*/

pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    int temp=0,c=0,u=0;
    for(int i=0;i<arr2.size();i++){
        arr1.push_back(arr2[i]);
    }
    
   for(int i = 0; i<arr1.size(); i++) {
       for(int j = i+1; j<arr1.size(); j++){
          if(arr1[j] < arr1[i]) {
             temp = arr1[i];
             arr1[i] = arr1[j];
             arr1[j] = temp;
          }
       }
   }
    
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]!=arr1[i+1]){
            u++;
        }
        else{
            c++;
            u++;
            i++;
        }          
    }
   
    return {c,u};    
        
}