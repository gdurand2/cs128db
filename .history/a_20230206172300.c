vector sstring_split(sstringthis, char delimiter) {
    // your code goes here
    vector v = vector_create(&string_copy_constructor, &string_destructor,
                              &string_default_constructor);
    charp = this->str;
    char q = strchr(p, delimiter);
    while (q != NULL) {
        charslice = sstring_slice(this, p - this->str, q - this->str);
        vector_push_back(v, cstr_to_sstring(slice));
        p = q + 1;
        q = strchr(p, delimiter);
    }
    char *slice = sstring_slice(this, p - this->str, this->len);
    vector_push_back(v, cstr_to_sstring(slice));
    return v;
}
that is what I have and it prints the correct output on my terminal however when I submit it to the autograder it fails both the easy and hard test cases.
struct sstring {
    // Anything you want
    char *str;
    size_t len;
};