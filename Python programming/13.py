seconds = int(input("Enter the number of seconds you want to convert to the given format(HH:MM:SS): "))


def convert_seconds(seconds):
    hours = seconds // 3600
    minutes = (seconds - hours * 3600) // 60
    remaining_seconds = seconds - hours * 3600 - minutes * 60
    return hours, minutes, remaining_seconds

hours, minutes, remaining_seconds = convert_seconds(seconds)

if hours < 10:
    hours = str(0) + str(hours)
if minutes < 10:
    minutes = str(0) + str(minutes)
if remaining_seconds < 10:
    remaining_seconds = str(0) + str(remaining_seconds)
elif remaining_seconds == 0:
    remaining_seconds = str(0) + str(remaining_seconds)
    

output = (f"{hours}:{minutes}:{remaining_seconds}")
print(output)