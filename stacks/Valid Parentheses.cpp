func isValid(s string) bool {
	symbolMap := map[uint8]uint8{
		'(':')',
		'{':'}',
		'[':']',
	}
	s = strings.ReplaceAll(s," ","")
	if len(s)%2!=0{
		return false
	}
	stack := make([]uint8,len(s),len(s))
	stackIndex := -1
	for index :=0;index< len(s);index++{
		if s[index] == '('||s[index]== '{'|| s[index] == '['{
			stackIndex++
			stack[stackIndex]= s[index]
		}else{
			if stackIndex < 0{
				return false
			}
			if symbolMap[stack[stackIndex]] != s[index]{
				return false
			}
			stackIndex--
		}
	}
	if stackIndex >=0{
		return false
	}
	return true
}
