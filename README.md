# MJIT

This is unofficial. Own your risk!

## Installation

Add this line to your application's Gemfile:

```ruby
gem 'mjit'
```

And then execute:

    $ bundle

Or install it yourself as:

    $ gem install mjit

## Usage

When you use this gem, you must start Ruby with --jit. Otherwise it segfaults.

```rb
# This stops MJIT's internal profiler. Actually this doesn't stop MJIT compilation.
RubyVM::MJIT.disable

# This enables it again.
RubyVM::MJIT.enable
```

## License

The gem is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).
