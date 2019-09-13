# One change to make it ascending

def check(arr)
  x = 0
  (0..arr.length-2).each do |i|
    if(arr[i] > arr[i+1])
      x += 1
    end
  end

  x <= 1
end

puts check([13, 4, 5])      # True
puts check([5, 1, 3, 2, 5]) # False
