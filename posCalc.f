program posClac

	!variable declaration
		integer, dimension(10) :: A
		integer :: total
	
	!assigning values
		A = (/2,4,6,-8,-10,-12,14,16,18,20/)
		
	!Calculations
		do i = 1,10
			if(A(i) > 0) then
				total = total + A(i)
			enf if
		end do
		
	Print *, "Total of positive integers in array = " total
end program posCalc