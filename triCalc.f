program calcTria

	!variable declaration
		integer, dimension(3) :: length
		integer :: base, height, hyp
		real :: area, perimeter
		
	!assigning values
		Print *, "Enter 3 integers (base, height, hypotenuse)"
		do i = 1,3
			read(*,*) length(i)
		end do
		
		base = length(1)
		height = length(2)
		hyp = length(3)
		
	!value evaluation
		do i = 1,3
			if((length(i) <= 0) .and. (base+height < hyp) .or. (base+hyp < height)) then
				Print *, "These values cannot be used to make a triangle"
				
				stop
			end if
		end do
		
	!calculations
	
		area = .5 * (base * height)
		
		perimeter = length(1) + length(2) + length(3)
		
	Print *,"Area = ", area, "Perimeter = ", perimeter
end program calcTria 