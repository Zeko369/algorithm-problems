def sort(arr)
  items = {}
  largest = nil
  smallest = nil

  arr.each do |item|
    if items[item].nil?
      items[item] = []
      if largest.nil? || item > largest
        largest = item
      elsif smallest.nil? || item < smallest 
        smallest = item
      end
    end

    items[item] << item;
  end

  other = (items.keys - [smallest, largest])[0]
  [items[smallest], items[other], items[largest]].flatten
end

p sort([3, 3, 2, 1, 3, 2, 1])
