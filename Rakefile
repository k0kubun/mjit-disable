require 'bundler/gem_tasks'

require 'rake/extensiontask'

task :build => :compile

Rake::ExtensionTask.new('mjit') do |ext|
  ext.lib_dir = 'lib/mjit'
end

task :default => [:clobber, :compile]
