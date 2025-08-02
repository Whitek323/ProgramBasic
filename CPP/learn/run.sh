echo "Select a file to run:"
select file in *.cpp; do
  if [ -n "$file" ]; then
    g++ "$file" -o run && ./run
    break
  else
    echo "Invalid selection."
  fi
done