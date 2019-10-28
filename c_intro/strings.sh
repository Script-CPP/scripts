#!/bin/bash

strings $(python3 -c "print('\x00' * 20 + 'def')")
