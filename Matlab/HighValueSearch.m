function [HV, position] = HighValueSearch(arr)
% Finds the largest value in an array and its position
A=arr;
[numRows, numCols]=size(A);

OldValue=A(numRows, numCols);
rHV=numRows;
cHV=numCols;

    for i = 1:numRows
        for j=1:numCols
            CurrentValue = A(i,j);
            if CurrentValue > OldValue
                OldValue = CurrentValue;
                rHV=i;
                cHV=j;
            end
        end
    
    end
X = ['Highest value is located in row ',num2str(rHV),' column ',num2str(cHV)];

HV=OldValue;
position=disp(X)
end
