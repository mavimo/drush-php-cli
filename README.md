# Install

You can use it directly from this repo:

    mkdir ~/.drush
    cd $_
    git clone https://github.com/mavimo/drush-php-cli.git php-cli

Load required dependencies with composer:

    composer install

And clear drush cache

    drush cc drush

# Usage

Create an interactive shell using:

    drush php-cli

now you can write all PHP code you need to test.

# Credits

Idea from [http://twitter.com/grota](Giuseppe Rota)
Implemented from [http://twitter.com/mavimo](Marco Vito Moscaritolo)
