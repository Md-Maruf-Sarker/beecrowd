seconds = int(input())

hours = int(seconds / 3600)
seconds = int(seconds - (hours * 3600))
minutes = int(seconds / 60)
seconds = int(seconds - (minutes * 60))

print(f'{hours}:{minutes}:{seconds}')