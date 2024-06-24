class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        int arr[100000];
        int index = 0, i, j;

        while( head != NULL ){      //making elements of linked list into array 
            arr[index] = head->val; 
            head = head->next;
            index++;
        }

        if( index == 1 )    // if length == 1 then palindrome 
            return true;
        else{
            if( index%2 == 1 ){     // if length is odd
                for( i = 0; i < index/2; i++ ){
                    if( arr[i] != arr[ index-i-1 ] )
                        return false;
                }
            }
            else{       // if length is even
                for( i = 0; i <= index/2; i++ ){
                    if( arr[i] != arr[ index-i-1 ] )
                        return false;
                }
            }
            
        }

        return true;
        
        
    }
};
