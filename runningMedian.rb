default_arr = [2, 1, 4, 7, 2, 0, 5]

def running_median(arr)
  sum = 0.0;
  i = -1
  arr.map do |item|
    sum += item 
    i += 1
    sum / (i + 1).to_f
  end
end

puts running_median(default_arr)
