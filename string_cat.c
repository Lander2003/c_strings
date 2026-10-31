char *string_cat(char *dest, char *src){
	int dest_length = 0;
	int i = 0;

	while(dest[dest_length] != '\0'){
		dest_length++;
	}

	while(src[i] != '\0'){
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}

	dest[dest_length] = '\0';
	return dest;
}
