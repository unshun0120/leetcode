class Solution {
public:
    bool checkIfPangram(string sentence) {
        int i;
        int appear[26]={0};

        for( i = 0; i < sentence.length(); i++ ){       
            if( sentence[i] < 97 || sentence[i] > 122 )     //�O�_�����O�p�g�^��r��
                return false;
            else
                appear[sentence[i]-97] = 1;     //�N�X�{�L���r���������index set 1
        }

        for( i = 0; i < 26; i++ ){      //�Y��0�N��S�X�{�L->false
            if( appear[i] == 0 )
                return false;
        }

        return true;


    }
};
