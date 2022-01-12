#ifndef SWAP_H
#define SWAP_H

template<typename T>
void swap (T & element1 , T & element2) {
    T tmp = std::move(element1);
    element1 = std::move(element2);
    element2 = std::move(tmp);
}

#endif //SWAP_H