void
bcopy(const void *s1, void *s2, size_t n)
{ while (n-- > 0)
    *s2++ = *s1++;
}


