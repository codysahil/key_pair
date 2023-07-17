bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    sort(arr,arr+n);
	    int start = 0; 
	    int end = n-1;
	    while(start<end){
	        if(arr[start]+arr[end]==x){
	        return 1;
	    }
	    else if(arr[start]+arr[end]<x){
	        start++;
	    }
	    else{
	        end--;
	    }
	  }
	  return 0;
	}
