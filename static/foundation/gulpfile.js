var BASE_PATH = './';
var SOURCE_PATH = 'src';
var DIST_PATH = 'dist';

var CSS_SOURCE_PATH = BASE_PATH + 'assets/styles/';

/* GULP PLUGINS */
var gulp = require('gulp');
var sass = require('gulp-ruby-sass');
var autoprefixer = require('gulp-autoprefixer');
var concat = require('gulp-concat');
var exec = require('gulp-exec');
var connect = require('gulp-connect');


/* GULP TASKS */

Process styles
gulp.task('styles', function() {
     return gulp.src(BASE_PATH + SOURCE_PATH + '/scss/foundation.scss')
         .pipe(sass({ style: 'expanded' }))
         .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
         .pipe(gulp.dest(BASE_PATH + DIST_PATH + '/assets/css'))
         ;
});

gulp.task('hologram', function() {
    gulp.src('')
        .pipe(exec('hologram'));
});

gulp.task('connect', function() {
  connect.server({
    root: ['styleguide'],
    port: 1337,
    livereload: false
  });
});

gulp.task('html', function () {
   gulp.src('./styleguide/**/*.html')
     .pipe(connect.reload());
});

gulp.task('watch', function () {
   gulp.watch(['./styleguide/**/*.html'], ['html']);
});

gulp.task('default', ['connect', 'watch']);