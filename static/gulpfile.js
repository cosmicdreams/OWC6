var BASE_PATH = './';
var SOURCE_PATH = 'src';
var DIST_PATH = 'dist';

var CSS_SOURCE_PATH = '<%= BASE_PATH %>' + 'assets/styles/';

/* GULP PLUGINS */
var gulp = require('gulp');
var sass = require('gulp-ruby-sass');
var autoprefixer = require('gulp-autoprefixer');
var concat = require('gulp-concat');
var exec = require('gulp-exec');


/* GULP TASKS */
gulp.task('styles', function() {
    return gulp.src(BASE_PATH + SOURCE_PATH + '/assets/styles/scss/screen.scss')
        .pipe(sass({ style: 'expanded' }))
        .pipe(autoprefixer('last 2 version', 'safari 5', 'ie 8', 'ie 9', 'opera 12.1', 'ios 6', 'android 4'))
        .pipe(gulp.dest(BASE_PATH + DIST_PATH + '/assets/css'))
        ;
});


gulp.task('hologram', function() {
    gulp.src('./**/**')
        .pipe(exec('hologram'));
});