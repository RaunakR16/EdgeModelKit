from edgemodelkit import DataFetcher

# Initialize the DataFetcher with the desired serial port and baud rate
fetcher = DataFetcher(serial_port="COM3", baud_rate=9600)

# Fetch data as a Python list
sensor_data = fetcher.fetch_data(return_as_numpy=False)
print("Sensor Data:", sensor_data)

# Log 10 samples to a CSV file with timestamp and count columns
fetcher.log_sensor_data(class_label="CSV_FILE_NAME", num_samples=100, add_timestamp=True, add_count=True)
