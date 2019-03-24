#include <iostream>
#include <stdexcept>
#include "elma.h"

namespace elma {
    
    Channel& Channel::send(double value) {
        _queue.push_front(value);
        while ( _queue.size() >= capacity() ) {
            _queue.pop_back();
        }
        return *this;
    }

    Channel& Channel::flush(double) {
        _queue.clear();
        return *this;
    }

    double Channel::latest() {
        if ( _queue.size() == 0 ) {
            throw std::range_error("Tried to get the latest value in an empty channel.");
        }
        return _queue.front();
    }

    vector<double> Channel::latest(int n){
        vector<double> result;
        if ( _queue.size() == 0 ) {
            throw std::range_error("Tried to get the latest value in an empty channel.");
        }
        // TODO: Question 2
        for (int i=0; i<_queue.size() && i < n; i++){
            result.push_back(_queue[i] );}
        
        return result;
    }

    double Channel::earliest() {
        if ( _queue.size() == 0 ) {
            throw std::range_error("Tried to get the earliest value in an empty channel.");
        }
        return _queue.back();        
    }    

    void Channel::change_capacity(int n){
        // TODO: Question 3
        _queue.resize(n);
        _capacity = _queue.size();

    }
}